
document.addEventListener('DOMContentLoaded', () => {

  const tabButtons = document.querySelectorAll('.tab-button');
  const tabPanes = document.querySelectorAll('.tab-pane');

  tabButtons.forEach(button => {
    button.addEventListener('click', () => {

      const tabId = button.dataset.tab;

      tabButtons.forEach(btn => {
        btn.classList.remove('active');
      });

      tabPanes.forEach(pane => {
        pane.classList.remove('active');
      });

      button.classList.add('active');

      const tabPane = document.getElementById(`tab-${tabId}`);

      if (tabPane) {
        tabPane.classList.add('active');
      }

    });
  });

});
